
/* ==== TStrings.vmt_02c @ 00410330 ==== 
 * signature: undefined __register TStrings.vmt_02c(int * param_1, char * param_2)
 * body: 00410330-004103c6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_02c(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  int local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_20 = (code *)0x410357;
  local_8 = param_1;
  FUN_0040f97c(param_1);
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  (**(code **)(*local_8 + 0x40))();
  if (param_2 != (char *)0x0) {
    while (pcVar2 = param_2, *param_2 != '\0') {
      for (; ((cVar1 = *pcVar2, cVar1 != '\0' && (cVar1 != '\n')) && (cVar1 != '\r'));
          pcVar2 = pcVar2 + 1) {
      }
      FUN_00403aa0(&local_c,(undefined4 *)param_2,(int)pcVar2 - (int)param_2);
      (**(code **)(*local_8 + 0x34))(local_8,local_c);
      param_2 = pcVar2;
      if (*pcVar2 == '\r') {
        param_2 = pcVar2 + 1;
      }
      if (*param_2 == '\n') {
        param_2 = param_2 + 1;
      }
    }
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_004103ce;
  pcStack_24 = (code *)0x4103c6;
  FUN_0040fa38(local_8);
  return;
}


