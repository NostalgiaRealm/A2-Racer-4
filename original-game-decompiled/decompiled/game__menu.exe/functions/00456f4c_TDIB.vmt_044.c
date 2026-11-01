
/* ==== TDIB.vmt_044 @ 00456f4c ==== 
 * signature: undefined TDIB.vmt_044(void)
 * body: 00456f4c-00456f9a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDIB_vmt_044(int *param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    if (*(char *)(param_1[9] + 0x42c) == '\0') {
      GdiFlush();
    }
    FUN_004126f0(param_2,*(undefined4 *)(param_1[9] + 0xc),*(int *)(param_1[9] + 0x10));
    FUN_004126f0(param_2,*(undefined4 *)(param_1[9] + 0x440),
                 *(int *)(*(int *)(param_1[9] + 0xc) + 0x14));
  }
  return;
}


