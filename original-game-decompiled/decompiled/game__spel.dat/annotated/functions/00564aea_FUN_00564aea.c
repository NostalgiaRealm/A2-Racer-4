
/* ==== FUN_00564aea @ 00564aea ==== 
 * signature: undefined4 __cdecl FUN_00564aea(char * param_1, undefined2 * param_2, int param_3)
 * body: 00564aea-00564c66
 */

undefined4 __cdecl FUN_00564aea(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  if (DAT_0074dfd4 == (code *)0x0) {
    iVar1 = FUN_0056521b();
    if (iVar1 == 0) {
      DAT_0074dfd4 = FUN_00565251;
    }
    else {
      DAT_0074dfd4 = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_0074dfc4 = param_1;
    if (*param_1 != '\0') {
      FUN_00564c67(0x5c9280,0x40,(int *)&DAT_0074dfc4);
    }
    DAT_0074dfc8 = param_1 + 0x40;
    if ((DAT_0074dfc8 != (char *)0x0) && (*DAT_0074dfc8 != '\0')) {
      FUN_00564c67(0x5c91c8,0x16,(int *)&DAT_0074dfc8);
    }
    DAT_0074dfcc = 0;
    if ((DAT_0074dfc4 != (char *)0x0) && (*DAT_0074dfc4 != '\0')) {
      if ((DAT_0074dfc8 == (char *)0x0) || (*DAT_0074dfc8 == '\0')) {
        FUN_00564f4a();
      }
      else {
        FUN_00564cbf();
      }
      goto LAB_00564ba7;
    }
    if ((DAT_0074dfc8 != (char *)0x0) && (*DAT_0074dfc8 != '\0')) {
      FUN_0056505d();
      goto LAB_00564ba7;
    }
  }
  FUN_0056511a();
LAB_00564ba7:
  if ((((DAT_0074dfcc == 0) || (uVar2 = FUN_00565134((byte *)(param_1 + 0x80)), uVar2 == 0)) ||
      (BVar3 = IsValidCodePage(uVar2 & 0xffff), BVar3 == 0)) ||
     (BVar3 = IsValidLocale(DAT_0074dfb4,1), BVar3 == 0)) {
    return 0;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (undefined2)DAT_0074dfb4;
    param_2[1] = (undefined2)DAT_0074dfd0;
    param_2[2] = (short)uVar2;
  }
  if (param_3 != 0) {
    iVar1 = (*DAT_0074dfd4)(DAT_0074dfb4,0x1001,param_3,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (*DAT_0074dfd4)(DAT_0074dfd0,0x1002,param_3 + 0x40,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00567b81(uVar2,(char *)(param_3 + 0x80),10);
  }
  return 1;
}


