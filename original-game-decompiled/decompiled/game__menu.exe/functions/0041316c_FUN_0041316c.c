
/* ==== FUN_0041316c @ 0041316c ==== 
 * signature: undefined __register FUN_0041316c(int param_1, char * param_2)
 * body: 0041316c-00413206;0041320e-00413214
 */

void FUN_0041316c(int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  if (DAT_004ac630 == 0) {
    return;
  }
  puStack_1c = (undefined1 *)0x413192;
  piVar1 = (int *)FUN_00410750(DAT_004ac630);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar4 = piVar1[2] + -1;
  puStack_1c = &stack0xfffffffc;
  if (-1 < iVar4) {
    do {
      piVar2 = (int *)FUN_004102b0(piVar1,iVar4);
      if ((param_1 == 0) || (piVar2[2] == param_1)) {
        if (param_2 != (char *)0x0) {
          uVar3 = FUN_0040830c(param_2,(char *)piVar2[4]);
          if ((char)uVar3 == '\0') goto LAB_004131e9;
        }
        FUN_00410150(piVar1,iVar4);
        FUN_00402f9c(piVar2);
      }
LAB_004131e9:
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x41320e;
  pcStack_20 = (code *)0x413206;
  FUN_004107b4(DAT_004ac630);
  return;
}


