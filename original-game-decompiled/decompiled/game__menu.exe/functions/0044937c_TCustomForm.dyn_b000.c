
/* ==== TCustomForm.dyn_b000 @ 0044937c ==== 
 * signature: undefined TCustomForm.dyn_b000(void)
 * body: 0044937c-0044939a
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b000(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    FUN_00403178(param_1,param_2,param_3);
    return;
  }
  *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 0x20;
  return;
}


