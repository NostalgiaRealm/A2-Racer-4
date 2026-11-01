
/* ==== TCustomCheckBox.dyn_ffcf @ 00428ca8 ==== 
 * signature: undefined TCustomCheckBox.dyn_ffcf(void)
 * body: 00428ca8-00428cd1
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

bool TCustomCheckBox_dyn_ffcf(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00403178(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    return true;
  }
  return (char)param_1[0x7e] != '\x01';
}


