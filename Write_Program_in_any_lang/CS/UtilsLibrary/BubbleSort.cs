using System;
using System.Collections.Generic;
using System.Text;

namespace UtilsLibrary
{
    public class BubbleSort
    {
        public static void GetBubbleSort(int[] inArg)
        {
            var itemMoved = false;
            do
            {
                itemMoved = false;
                for (int i = 0; i < inArg.Length - 1; i++)
                {
                    if (inArg[i] > inArg[i + 1])
                    {
                        var lowerValue = inArg[i + 1];
                        inArg[i + 1] = inArg[i];
                        inArg[i] = lowerValue;
                        itemMoved = true;
                    }
                }
            } while (itemMoved);
        }
    }
}
