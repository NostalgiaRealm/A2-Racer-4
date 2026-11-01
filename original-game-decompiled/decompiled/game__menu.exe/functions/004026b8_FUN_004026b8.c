
/* ==== FUN_004026b8 @ 004026b8 ==== 
 * signature: undefined4 __register FUN_004026b8(undefined4 * param_1, uint param_2)
 * body: 004026b8-00402768;00402770-00402778
 */

undefined4 FUN_004026b8(undefined4 *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  if ((DAT_004ac430 == '\0') && (cVar1 = FUN_00401ae8(), cVar1 == '\0')) {
    return 0;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_004ac049 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  }
  uVar2 = FUN_004024e8((int)param_1,param_2);
  if ((char)uVar2 == '\0') {
    puVar3 = FUN_004021bc(param_2);
    uVar4 = (param_1[-1] & 0x7ffffffc) - 4;
    if ((int)param_2 < (int)uVar4) {
      uVar4 = param_2;
    }
    if (puVar3 != (uint *)0x0) {
      FUN_004028d8(param_1,puVar3,uVar4);
      FUN_00402344((int)param_1);
    }
  }
  uVar2 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_004ac049 != '\0') {
    uStack_20 = 0x402768;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  }
  return uVar2;
}


