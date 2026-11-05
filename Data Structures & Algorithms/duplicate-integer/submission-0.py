class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        seen = set() # an empty set to store numbers

        for n in nums:
            if n in seen: # is n already in seen?
                return True

            seen.add(n) # adds n to seen set

        return False
        