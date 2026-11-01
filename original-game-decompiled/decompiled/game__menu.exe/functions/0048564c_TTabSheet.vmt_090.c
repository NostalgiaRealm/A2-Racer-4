
/* ==== TTabSheet.vmt_090 @ 0048564c ==== 
 * signature: undefined TTabSheet.vmt_090(void)
 * body: 0048564c-0048565b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTabSheet_vmt_090(int *param_1,int *param_2)

{
  TWinControl_vmt_090(param_1,param_2);
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


