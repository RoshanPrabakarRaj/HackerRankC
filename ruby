def neg_pos(arr, index)
    arr[-index]
    # return the element of the array at the position `index` from the end of the list
    # Clue : arr[-index]
end

def first_element(arr)
    arr.first
    # return the first element of the array
    # arr.first
end

def last_element(arr)
    arr.last
    # return the last element of the array
    # arr.last
end

def first_n(arr, n)
    arr.take(n)
    # return the first n elements of the array
end

def drop_n(arr, n)
    arr.drop(n)
    # drop the first n elements of the array and return the rest
end
// end
