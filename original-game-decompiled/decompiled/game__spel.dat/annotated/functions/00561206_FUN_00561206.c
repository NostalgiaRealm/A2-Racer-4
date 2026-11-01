
/* ==== FUN_00561206 @ 00561206 ==== 
 * signature: undefined * __thiscall FUN_00561206(void * this, byte * param_1)
 * body: 00561206-00561296
 */

undefined * __thiscall FUN_00561206(void *this,byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort local_1c [6];
  uint local_10;
  undefined4 uStack_c;
  int local_8;
  
  uVar3 = 0;
  uVar1 = FUN_005661cf(this,local_1c,&local_8,param_1,0,0,0,0);
  if ((uVar1 & 4) == 0) {
    iVar2 = FUN_00565b6a(local_1c,&local_10);
    if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_10 = 0;
    uStack_c = 0;
  }
  *(uint *)PTR_DAT_005c8a38 = uVar3;
  *(int *)(PTR_DAT_005c8a38 + 4) = local_8 - (int)param_1;
  *(ulonglong *)(PTR_DAT_005c8a38 + 0x10) = CONCAT44(uStack_c,local_10);
  return PTR_DAT_005c8a38;
}


