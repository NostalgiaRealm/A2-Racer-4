
/* ==== FUN_0043248c @ 0043248c ==== 
 * signature: undefined __register FUN_0043248c(undefined * param_1)
 * body: 0043248c-00432566
 */

void FUN_0043248c(undefined *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined *local_c;
  undefined *local_8;
  
  local_c = (undefined *)0x0;
  pcStack_1c = (code *)0x4324a5;
  local_8 = param_1;
  FUN_00403dec((int)param_1);
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcStack_1c = (code *)&stack0xfffffffc;
  do {
    do {
      uVar1 = FUN_00432430((int *)&local_8,DAT_004467c0);
    } while ((char)uVar1 != '\0');
    uVar1 = FUN_00432430((int *)&local_8,&DAT_00432580);
  } while ((((char)uVar1 != '\0') ||
           (uVar1 = FUN_00432430((int *)&local_8,DAT_004467c4), (char)uVar1 != '\0')) ||
          (uVar1 = FUN_00432430((int *)&local_8,DAT_004467c8), (char)uVar1 != '\0'));
  if (local_8 != (undefined *)0x0) {
    uVar3 = 8;
    do {
      FUN_0043222c(uVar3,(int *)&local_c);
      iVar2 = FUN_00407b28(local_8,local_c);
      if (iVar2 == 0) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x256);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0043256e;
  pcStack_20 = (code *)0x432566;
  FUN_004039dc((int *)&local_c,2);
  return;
}


