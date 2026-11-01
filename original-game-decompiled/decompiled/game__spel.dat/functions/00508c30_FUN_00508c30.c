
/* ==== FUN_00508c30 @ 00508c30 ==== 
 * signature: undefined __fastcall FUN_00508c30(int param_1)
 * body: 00508c30-00508cc4
 */

void __fastcall FUN_00508c30(int param_1)

{
  int iVar1;
  double local_80 [16];
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x178);
  }
  FUN_004f32e0(iVar1);
  FUN_004fa5b0((void *)(*(int *)(*(int *)(param_1 + 0x178) + 0xa4) + 0x128),
               (double *)(*(int *)(*(int *)(param_1 + 0xf0) + 0xa4) + 0x128),local_80);
  FUN_004fa460((void *)(param_1 + 0xf8),local_80,(double *)(param_1 + 0x70));
  if (*(void **)(param_1 + 0x17c) != (void *)0x0) {
    FUN_004fa6e0(*(void **)(param_1 + 0x17c),local_80,*(double **)(param_1 + 0xf4));
    return;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}


