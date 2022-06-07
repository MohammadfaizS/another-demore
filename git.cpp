#include <iostream>

int main()
{
    int array[]{12,34,2,34,645,4}; 
    constexpr int arraySize{sizeof(array)/sizeof(array[0])}; //storing the size of array in a variable
    bool yesOrNo{false}; // a boolean varaible set to false,
                        //so that when we use an if statement to swap a value we can change it to true and use it to reduce an iteration
        for(int firstIndex{0};firstIndex<arraySize-1; firstIndex++)
        {
            int smallestVariable{firstIndex}; // a variable to store the value of first index so that we could compare it with the next index and swap
                for(int currentIndex{firstIndex};currentIndex<arraySize;currentIndex++)
                {
                    if(array[currentIndex]<array[smallestVariable]) 
                    {
                        std::swap(array[currentIndex],array[smallestVariable]);
                        yesOrNo = true;
                    }
                }
        if(yesOrNo == true) // reducing reduandant iterations.
        {
            arraySize-1;
        }
    
}

    for (int i = 0; i < arraySize; i++) // printing the array.
    {
        std::cout<<array[i]<<" ";
    }

    std::cout<<"huuu huuu huu huu";

    // print(array[],arraySize);
    
    return 0;
}