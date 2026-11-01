
/* ==== FUN_0043cb6c @ 0043cb6c ==== 
 * signature: undefined __register FUN_0043cb6c(undefined * param_1)
 * body: 0043cb6c-0043cc46
 */

void FUN_0043cb6c(undefined *param_1)

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
  pcStack_1c = (code *)0x43cb85;
  local_8 = param_1;
  FUN_00404090((int)param_1);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcStack_1c = (code *)&stack0xfffffffc;
  do {
    do {
      uVar1 = FUN_0043cb10((int *)&local_8,DAT_004aa894);
    } while ((char)uVar1 != '\0');
    uVar1 = FUN_0043cb10((int *)&local_8,&DAT_0043cc60);
  } while ((((char)uVar1 != '\0') ||
           (uVar1 = FUN_0043cb10((int *)&local_8,DAT_004aa898), (char)uVar1 != '\0')) ||
          (uVar1 = FUN_0043cb10((int *)&local_8,DAT_004aa89c), (char)uVar1 != '\0'));
  if (local_8 != (undefined *)0x0) {
    uVar3 = 8;
    do {
      FUN_0043c90c(uVar3,(int *)&local_c);
      iVar2 = FUN_00408364(local_8,local_c);
      if (iVar2 == 0) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x256);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0043cc4e;
  pcStack_20 = (code *)0x43cc46;
  FUN_00403c80((int *)&local_c,2);
  return;
}


