﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ChatApp
{
    class Program
    {
        static void Main(string[] args)
        {
            var service = new TCPService();
            service.Start();

            Console.ReadLine();
            service.Stop();
        }
    }
}
