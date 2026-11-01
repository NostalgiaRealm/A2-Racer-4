
/* ==== FUN_004112b4 @ 004112b4 ==== 
 * signature: undefined __register FUN_004112b4(int param_1, char * param_2)
 * body: 004112b4-00411359
 */

void FUN_004112b4(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  char *local_c;
  int local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_c = (char *)0x0;
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = 0;
  iVar1 = local_8;
  if (param_2 != (char *)0x0) {
    while (pcVar4 = param_2, iVar1 = param_1, *param_2 != '\0') {
      for (; (*pcVar4 != '\0' && (1 < (byte)(*pcVar4 - 0x2dU))); pcVar4 = pcVar4 + 1) {
      }
      FUN_00403aa0((int *)&local_c,(undefined4 *)param_2,(int)pcVar4 - (int)param_2);
      iVar2 = FUN_00413ecc(param_1,local_c);
      if ((iVar2 == 0) && (uVar3 = FUN_00407ad0(local_c,"Owner"), (char)uVar3 != '\0')) {
        iVar2 = param_1;
      }
      iVar1 = local_8;
      if (iVar2 == 0) break;
      param_2 = pcVar4;
      if (*pcVar4 == '.') {
        param_2 = pcVar4 + 1;
      }
      if (*param_2 == '-') {
        param_2 = param_2 + 1;
      }
      param_1 = iVar2;
      if (*param_2 == '>') {
        param_2 = param_2 + 1;
      }
    }
  }
  local_8 = iVar1;
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00411361;
  pcStack_20 = (code *)0x411359;
  FUN_004039b8((int *)&local_c);
  return;
}


