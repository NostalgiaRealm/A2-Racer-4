
/* ==== TCustomEdit.dyn_b010 @ 00426c3c ==== 
 * signature: undefined TCustomEdit.dyn_b010(void)
 * body: 00426c3c-00426c6e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomEdit_dyn_b010(int *param_1,undefined4 param_2)

{
  if ((*PTR_DAT_004ab7d4 != '\0') && ((char)param_1[0x7d] == '\x01')) {
    FUN_00426abc(param_1);
    FUN_00431e04((int)param_1);
  }
  TWinControl_dyn_b010((int)param_1,param_2);
  return;
}


