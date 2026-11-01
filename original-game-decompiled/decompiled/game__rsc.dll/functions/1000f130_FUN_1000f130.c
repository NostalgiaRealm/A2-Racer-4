
/* ==== FUN_1000f130 @ 1000f130 ==== 
 * signature: undefined4 __cdecl FUN_1000f130(int param_1, uint * param_2)
 * body: 1000f130-1000f2c2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000f130(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint local_ac [2];
  undefined4 local_a4;
  uint local_a0 [33];
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined *local_10;
  uint *local_c;
  undefined4 local_8;
  
  puVar1 = FUN_1000f3d0(param_2,local_a0,local_ac,&local_a4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0x132;
    pcVar5 = "setlocal.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)local_a0);
    local_c = (uint *)FUN_10003710((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar6);
    if (local_c == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      local_10 = (undefined *)(&DAT_100304ec)[param_1 * 3];
      local_8 = *(undefined4 *)(&DAT_10031634 + param_1 * 4);
      FUN_100061d0(local_18,(undefined4 *)(&DAT_10031680 + param_1 * 6),6);
      local_1c = DAT_1003164c;
      puVar1 = FUN_10001ec0(local_c,local_a0);
      (&DAT_100304ec)[param_1 * 3] = puVar1;
      *(uint *)(&DAT_10031634 + param_1 * 4) = local_ac[0] & 0xffff;
      FUN_100061d0((undefined4 *)(&DAT_10031680 + param_1 * 6),local_ac,6);
      if (param_1 == 2) {
        DAT_1003164c = local_a4;
      }
      if (param_1 == 1) {
        _DAT_10031650 = local_a4;
      }
      iVar6 = (**(code **)(&DAT_100304f0 + param_1 * 0xc))();
      if (iVar6 == 0) {
        if (local_10 != &DAT_100303d8) {
          FUN_100041a0(local_10,2);
        }
        uVar2 = (&DAT_100304ec)[param_1 * 3];
      }
      else {
        (&DAT_100304ec)[param_1 * 3] = local_10;
        FUN_100041a0(local_c,2);
        *(undefined4 *)(&DAT_10031634 + param_1 * 4) = local_8;
        DAT_1003164c = local_1c;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


