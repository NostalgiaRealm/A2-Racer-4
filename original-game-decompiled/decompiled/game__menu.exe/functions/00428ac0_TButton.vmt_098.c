
/* ==== TButton.vmt_098 @ 00428ac0 ==== 
 * signature: undefined __register TButton.vmt_098(int * param_1)
 * body: 00428ac0-00428ad7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TButton_vmt_098(int *param_1)

{
  TWinControl_vmt_098(param_1);
  *(char *)((int)param_1 + 0x1fa) = (char)param_1[0x7e];
  return;
}


