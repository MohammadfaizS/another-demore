#include <iostream>

int main()
{
    int array[]{12,34,2,34,645,4};
    constexpr int arraySize{sizeof(array)/sizeof(array[0])};
    bool yesOrNo{false};
        for(int firstIndex{0};firstIndex<arraySize-1; firstIndex++)
        {
            int smallestVariable{firstIndex};
                for(int currentIndex{firstIndex};currentIndex<arraySize;currentIndex++)
                {
                    if(array[currentIndex]<array[smallestVariable])
                    {
                        std::swap(array[currentIndex],array[smallestVariable]);
                        yesOrNo = true;
                    }
                }
        if(yesOrNo == true)
        {
            arraySize-1;
        }
    
}

    for (int i = 0; i < arraySize; i++)
    {
        std::cout<<array[i]<<" ";
    }
    
    return 0;
}