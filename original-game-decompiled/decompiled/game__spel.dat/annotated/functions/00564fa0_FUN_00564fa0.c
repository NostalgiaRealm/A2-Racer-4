
/* ==== FUN_00564fa0 @ 00564fa0 ==== 
 * signature: uint __stdcall FUN_00564fa0(char * param_1)
 * body: 00564fa0-0056505c
 */

uint FUN_00564fa0(char *param_1)

{
  int iVar1;
  int iVar2;
  char local_7c [120];
  
  iVar1 = FUN_00565337(param_1);
  iVar2 = (*DAT_0074dfd4)(iVar1,(-(uint)(DAT_0074dfc0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0074dfcc = 0;
    return 1;
  }
  iVar2 = __strcmpi((char *)DAT_0074dfc4,local_7c);
  if (iVar2 == 0) {
    if (DAT_0074dfc0 == 0) {
      iVar2 = 1;
      goto LAB_0056502c;
    }
  }
  else {
    if (((DAT_0074dfc0 != 0) || (DAT_0074dfbc == (void *)0x0)) ||
       (iVar2 = FUN_00567c10(DAT_0074dfc4,local_7c,DAT_0074dfbc), iVar2 != 0)) goto LAB_0056504b;
    iVar2 = 0;
LAB_0056502c:
    iVar2 = FUN_005651b9(iVar1,iVar2);
    if (iVar2 == 0) goto LAB_0056504b;
  }
  DAT_0074dfcc = DAT_0074dfcc | 4;
  DAT_0074dfb4 = iVar1;
  DAT_0074dfd0 = iVar1;
LAB_0056504b:
  return ~DAT_0074dfcc >> 2 & 1;
}


