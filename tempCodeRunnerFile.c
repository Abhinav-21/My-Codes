    for(int k=0; k<11; k++){
        int arr[a[k]];
        for(int i=0; i<a[k]; i++){
            arr[i] = rand();
        }
        clock_t start, end;
        start = clock();
        Bubble_Sort(arr,a[k]);
        end = clock();
       // print(arr,size);
        printf("%d %f\n",a[k], (float)(end-start)/CLOCKS_PER_SEC);
        }
        printf("\n");
        for(int k=0; k<11; k++){
        int arr[a[k]];
        for(int i=0; i<a[k]; i++){
            arr[i] = rand();
        }
        clock_t start, end;
        start = clock();
        Selection_Sort(arr,a[k]);
        end = clock();
       // print(arr,size);
        printf("%d %f\n",a[k], (float)(end-start)/CLOCKS_PER_SEC);
        }