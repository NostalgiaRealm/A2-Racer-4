
/* ==== FUN_1000f3d0 @ 1000f3d0 ==== 
 * signature: uint * __cdecl FUN_1000f3d0(uint * param_1, uint * param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 1000f3d0-1000f553
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_1000f3d0(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
    param_2 = (uint *)0x0;
  }
  else if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
    *(undefined1 *)param_2 = 0x43;
    *(undefined1 *)((int)param_2 + 1) = 0;
    if (param_3 != (undefined4 *)0x0) {
      *(undefined2 *)param_3 = 0;
      *(undefined2 *)((int)param_3 + 2) = 0;
      *(undefined2 *)(param_3 + 1) = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    iVar1 = _strcmp(&DAT_10030460,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_100303dc,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_1000f5c0((char *)local_8c,(byte *)param_1);
      if (iVar1 != 0) {
        return (uint *)0x0;
      }
      iVar1 = FUN_10010da0((char *)local_8c,(undefined2 *)&DAT_10031658,(int)local_8c);
      if (iVar1 == 0) {
        return (uint *)0x0;
      }
      _DAT_10031660 = (uint)DAT_1003165c;
      ___lc_lctostr((uint *)&DAT_10030460,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_10001ec0((uint *)&DAT_100303dc,(uint *)&DAT_10030460);
      }
      else {
        FUN_10001ec0((uint *)&DAT_100303dc,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_100061d0(param_3,(undefined4 *)&DAT_10031658,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_100061d0(param_4,(undefined4 *)&DAT_10031660,4);
    }
    FUN_10001ec0(param_2,(uint *)&DAT_10030460);
    param_2 = (uint *)&DAT_10030460;
  }
  return param_2;
}


