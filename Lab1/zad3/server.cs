using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.IO;
using System.Diagnostics;
using System.ComponentModel;


namespace socket
{
    class Program
    {
        static void Main(string[] args)
        {
			byte[] bytes = new Byte[1024];
			string data = null;
			string data1 = null;
			IPHostEntry hostEntry = Dns.GetHostEntry(Dns.GetHostName());
			IPEndPoint localEndPoint = new IPEndPoint(IPAddress.Any, 12345);
			Socket listener = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp );
			IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
    		EndPoint senderRemote = (EndPoint)sender;
			try {
				listener.Bind(localEndPoint);
				listener.Listen(10); 
				while (true) {
					try{
						Console.WriteLine("Waiting for a connection...");

						var p = System.Diagnostics.Process.Start("server.exe");

						if (p != null) {
							int bytesRec = listener.ReceiveFrom(bytes, ref senderRemote);  
							data = Encoding.ASCII.GetString(bytes,0,bytesRec); 
							data1 =  data.Substring(4);
							Console.WriteLine($"Connection from {listener.RemoteEndPoint.ToString()}");
							listener.ReceiveFrom(bytes, ref senderRemote);
							Console.WriteLine($"Received: {data1}, sending it back.");
							//Create a new file     
							using (FileStream fs = File.Create(data.Substring(0,4)+".txt"))
							{
								byte[] info = new UTF8Encoding(true).GetBytes(data1);
								fs.Write(info, 0, info.Length);
							}

							byte[] msg = Encoding.ASCII.GetBytes(data1);
							var hexString = BitConverter.ToString(msg);
							hexString = hexString.Replace("-00", "");
							Console.WriteLine($"Wiadomosc w hexa: {hexString}");
							listener.Send(msg);	   					
							listener.Shutdown(SocketShutdown.Both);
							listener.Close();

						} else {
							Console.WriteLine($"error in proces");
						}

						p.WaitForExit();
					} catch (Exception e) {
						Console.WriteLine(e.ToString());
					}

						
				}
			} catch (Exception e) {
				Console.WriteLine(e.ToString());
			}
			data = null;
			data1 = null;
			//Console.WriteLine("\nPress ENTER to continue...");
			//Console.Read();
        }
    }
}
