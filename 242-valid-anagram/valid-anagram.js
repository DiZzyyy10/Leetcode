/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  // quick check for length
  if (s.length !== t.length) { return false; }

  let counter = new Array(26).fill(0);
  for (let i = 0; i < s.length; i++) {
    counter[s.charCodeAt(i) - 97]++;
  }

  // compare 
  for (let i = 0; i < t.length; i++) {
    if (counter[t.charCodeAt(i) - 97] <= 0) {
      return false;
    }

    counter[t.charCodeAt(i) - 97]--;
  }

  for (let i = 0; i < 26; i++) {
    if (counter[i] !== 0) {
      return false;
    }
  }

  return true;
};
