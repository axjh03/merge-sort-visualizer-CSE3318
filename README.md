# merge-sort-visualizer-CSE3318
Output : 

Unsorted array = { 38 27 43 3 9 82 10 }
        Calling mergeSort from main L=0 R=6
Left    Calling mergeSort with L=0 M=3
Left    Calling mergeSort with L=0 M=1
Left    Calling mergeSort with L=0 M=0
                mergeSort bottomed out L>=R
Right   Calling mergeSort with L=M+1=1 R=1
                mergeSort bottomed out L>=R
Merge   Calling merge with L=0 M=0 R=1
Merging L={ 38 } with R={ 27 }
Result of merge { 27 38 }
Right   Calling mergeSort with L=M+1=2 R=3
Left    Calling mergeSort with L=2 M=2
                mergeSort bottomed out L>=R
Right   Calling mergeSort with L=M+1=3 R=3
                mergeSort bottomed out L>=R
Merge   Calling merge with L=2 M=2 R=3
Merging L={ 43 } with R={ 3 }
Result of merge { 3 43 }
Merge   Calling merge with L=0 M=1 R=3
Merging L={ 27 38 } with R={ 3 43 }
Result of merge { 3 27 38 43 }
Right   Calling mergeSort with L=M+1=4 R=6
Left    Calling mergeSort with L=4 M=5
Left    Calling mergeSort with L=4 M=4
                mergeSort bottomed out L>=R
Right   Calling mergeSort with L=M+1=5 R=5
                mergeSort bottomed out L>=R
Merge   Calling merge with L=4 M=4 R=5
Merging L={ 9 } with R={ 82 }
Result of merge { 9 82 }
Right   Calling mergeSort with L=M+1=6 R=6
                mergeSort bottomed out L>=R
Merge   Calling merge with L=4 M=5 R=6
Merging L={ 9 82 } with R={ 10 }
Result of merge { 9 10 82 }
Merge   Calling merge with L=0 M=3 R=6
Merging L={ 3 27 38 43 } with R={ 9 10 82 }
Result of merge { 3 9 10 27 38 43 82 }
Sorted array = { 3 9 10 27 38 43 82 }