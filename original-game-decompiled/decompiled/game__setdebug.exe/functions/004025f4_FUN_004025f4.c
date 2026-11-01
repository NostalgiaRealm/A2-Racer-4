
/* ==== FUN_004025f4 @ 004025f4 ==== 
 * signature: undefined4 __register FUN_004025f4(undefined4 * param_1, uint param_2)
 * body: 004025f4-004026a4;004026ac-004026b4
 */

undefined4 FUN_004025f4(undefined4 *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  if ((DAT_00447428 == '\0') && (cVar1 = FUN_00401a24(), cVar1 == '\0')) {
    return 0;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_00447041 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  }
  uVar2 = FUN_00402424((int)param_1,param_2);
  if ((char)uVar2 == '\0') {
    puVar3 = FUN_004020f8(param_2);
    uVar4 = (param_1[-1] & 0x7ffffffc) - 4;
    if ((int)param_2 < (int)uVar4) {
      uVar4 = param_2;
    }
    if (puVar3 != (uint *)0x0) {
      FUN_004027d0(param_1,puVar3,uVar4);
      FUN_00402280((int)param_1);
    }
  }
  uVar2 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_00447041 != '\0') {
    uStack_20 = 0x4026a4;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  }
  return uVar2;
}


