
/* ==== FUN_0040a254 @ 0040a254 ==== 
 * signature: undefined __register FUN_0040a254(void)
 * body: 0040a254-0040a366
 */

void FUN_0040a254(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  LCID local_8;
  
  pcStack_2c = (code *)&stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  pcStack_30 = thunk_FUN_00403434;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = GetThreadLocale();
  iVar1 = 1;
  piVar2 = (int *)&DAT_00447514;
  piVar3 = (int *)&DAT_00447544;
  do {
    FUN_0040a218(iVar1 + 0x43,iVar1 + -1,0x446164,(int *)&local_10,0xb,(int)&stack0xfffffffc);
    FUN_00403a0c(piVar2,local_10);
    FUN_0040a218(iVar1 + 0x37,iVar1 + -1,0x446194,(int *)&local_14,0xb,(int)&stack0xfffffffc);
    FUN_00403a0c(piVar3,local_14);
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0xd);
  iVar1 = 1;
  piVar2 = (int *)&DAT_00447574;
  piVar3 = (int *)&DAT_00447590;
  do {
    local_c = (iVar1 + 5) % 7;
    FUN_0040a218(local_c + 0x31,iVar1 + -1,0x4461c4,(int *)&local_18,6,(int)&stack0xfffffffc);
    FUN_00403a0c(piVar2,local_18);
    FUN_0040a218(local_c + 0x2a,iVar1 + -1,0x4461e0,(int *)&local_1c,6,(int)&stack0xfffffffc);
    FUN_00403a0c(piVar3,local_1c);
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 8);
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_0040a36e;
  pcStack_30 = (code *)0x40a366;
  FUN_004039dc((int *)&local_1c,4);
  return;
}


