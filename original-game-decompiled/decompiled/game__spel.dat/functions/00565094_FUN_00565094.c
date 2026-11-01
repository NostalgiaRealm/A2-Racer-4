
/* ==== FUN_00565094 @ 00565094 ==== 
 * signature: uint __stdcall FUN_00565094(char * param_1)
 * body: 00565094-00565119
 */

uint FUN_00565094(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char local_7c [120];
  
  iVar1 = FUN_00565337(param_1);
  iVar2 = (*DAT_0074dfd4)(iVar1,(-(uint)(DAT_0074dfb8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0074dfcc = 0;
    uVar3 = 1;
  }
  else {
    iVar2 = __strcmpi(DAT_0074dfc8,local_7c);
    if (iVar2 == 0) {
      iVar2 = FUN_0056519a((short)iVar1);
      if (iVar2 != 0) {
        DAT_0074dfcc = DAT_0074dfcc | 4;
        DAT_0074dfb4 = iVar1;
        DAT_0074dfd0 = iVar1;
      }
    }
    uVar3 = ~DAT_0074dfcc >> 2 & 1;
  }
  return uVar3;
}


