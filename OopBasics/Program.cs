using System;
using System.Collections.Generic;

namespace OopBasics
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("\nLabo 2");

            List <Animals> animals1 = new List <Animals>()
            {
                new Animals("Julio", "Tigre", "Mamifero", 3, 'M'),
                new Animals("Brian", "Puma", "Mamifero", 7, 'F'),
                new Animals("Mario", "Tigre", "Mamifero", 10, 'M'),
                new Animals("Kira", "Puma", "Mamifero", 11, 'F'),
                new Animals("Jose", "Venado", "Mamifero", 5, 'F'),
                new Animals("Maria", "Tortuga", "Reptil", 5, 'F'),
                new Animals("Sueño", "Oveja", "Mamifero", 3, 'M'),
                new Animals("Pepe", "Boa", "Reptil", 7, 'M'),
                new Animals("Alisson", "Colibri", "Ave", 1, 'F'),
                new Animals("Juan", "Ocelote", "Mamifero", 2, 'M')
            };

            Console.WriteLine("\nLos animales de la lista:");
            foreach (var Animal in animals1)
            {
            Console.WriteLine($"\nNombre:{Animal.nameOfAnimal}\n-Especie: {Animal.spaceOfAnimal} *Clase: {Animal.classOfAnimal} *Edad: {Animal.ageOfAnimal} *Genero: {Animal.genusOfAnimal}");
            }

            animals1.RemoveAll(Animals =>
                {
                switch(Animals.spaceOfAnimal.Substring(0,1).ToLower())
                {
                case "a":
                case "e":
                case "i":
                case "o":
                case "u":
                return true;
                default:
                return false;
                }
                });
            Console.WriteLine("\nSe eliminaron las especies que inician con vocales.");
            Console.WriteLine("\nLos animales de la lista:");
            foreach (var Animal in animals1)
            {
            Console.WriteLine($"\nNombre:{Animal.nameOfAnimal}\n-Especie: {Animal.spaceOfAnimal} *Clase: {Animal.classOfAnimal} *Edad: {Animal.ageOfAnimal} *Genero: {Animal.genusOfAnimal}");
            }
        }
    }
}