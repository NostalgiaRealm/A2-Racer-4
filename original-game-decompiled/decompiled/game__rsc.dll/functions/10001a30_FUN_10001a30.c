
/* ==== FUN_10001a30 @ 10001a30 ==== 
 * signature: undefined __cdecl FUN_10001a30(byte * param_1)
 * body: 10001a30-10001b11
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10001a30(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined **local_c;
  int local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    local_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (local_c != (undefined **)0x0) {
      FUN_10001d70(local_c);
    }
  }
  else {
    for (local_8 = 0; local_8 < _DAT_100313fc; local_8 = local_8 + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + local_8 * 0x1c),param_1);
      if (uVar1 == 0) goto LAB_10001b01;
    }
    local_c = (undefined **)FUN_100022c0((LPCSTR)param_1,"rb");
    if (local_c != (undefined **)0x0) {
      FUN_10001d70(local_c);
    }
  }
LAB_10001b01:
  local_8 = 0x10001b0e;
  __chkesp();
  return;
}


