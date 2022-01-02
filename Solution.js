
/**
 * @param {number[]} time
 * @return {number}
 */
var numPairsDivisibleBy60 = function (time) {

    const TIME = 60;
    const timeRemainder = new Array(TIME).fill(0);
    let totalPairsDivisibleBy60 = 0;

    for (let duration of time) {
        let checkIndex = (duration % TIME) !== 0 ? (TIME - duration % TIME) : 0;
        totalPairsDivisibleBy60 += timeRemainder[checkIndex];
        timeRemainder[(duration % TIME)]++;
    }

    return totalPairsDivisibleBy60;
};
