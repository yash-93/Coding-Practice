class Solution:
    def ipv4(self, parts: list) -> bool:
        for part in parts:
            len_part = len(part)
            if len(part) < 1 or len(part) > 3:
                return False
            if len_part == 3:
                if part[0] == '2' and part[1] == '5' and part[2] == '6':
                    return False
            if part[0] == '0':
                if len_part!=1:
                    return False
            if part.isdigit() == False:
                return False
        return True
    
    def ipv6(self, parts: list) -> bool:
        chars = ['a', 'b', 'c', 'd', 'e', 'f', 'A', 'B', 'C', 'D', 'E', 'F', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
        for part in parts:
            len_part = len(part)
            if len(part)>4 or len(part)<1:
                return False
            for ch in part:
                if ch not in chars:
                    return False
        return True
            
    
    def validIPAddress(self, IP: str) -> str:
        parts_ipv4 = IP.split('.')
        parts_ipv6 = IP.split(':')
        
        if len(parts_ipv4)==4:
            if self.ipv4(parts_ipv4):
                return "IPv4"
            else:
                return "Neither"
        else:
            if len(parts_ipv6)==8:
                if self.ipv6(parts_ipv6):
                    return "IPv6"
                else:
                    return "Neither"
            else:
                return "Neither"
                
    