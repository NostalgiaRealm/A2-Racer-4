
/* ==== FUN_00568914 @ 00568914 ==== 
 * signature: int __cdecl FUN_00568914(uint param_1, int param_2)
 * body: 00568914-00568989
 */

int __cdecl FUN_00568914(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 < DAT_007501a0) {
    bVar1 = *(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8);
    if ((bVar1 & 1) != 0) {
      if (param_2 == 0x8000) {
        bVar2 = bVar1 & 0x7f;
      }
      else {
        if (param_2 != 0x4000) {
          DAT_0074dc60 = 0x16;
          return -1;
        }
        bVar2 = bVar1 | 0x80;
      }
      *(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) = bVar2;
      return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
    }
  }
  DAT_0074dc60 = 9;
  return -1;
}


