//
// Created by Yassuan Foljanty Catanzaro on 21.10.25.
//
#include <stdio.h>

function* makeRangeIterator(start = 0, end = infinity, step = 1) {
    let iterationCounter = 0;
    for (let i = start; i < end; i += step) {
        iterationCounter ++;
        yield i;
    }
    const it = makeRangeIterator(1,10,2);

    let result = it.next();
    while (!result.done) {
        console.log(result.value);
        result = it.next();
    }
    console.log("Iteration der Sequqnz der größe:", result.value);
}