
/* ==== TControl.vmt_038 @ 0042f61c ==== 
 * signature: undefined __register TControl.vmt_038(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 0042f61c-0042f649
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_038(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  if (*(short *)(param_1 + 0xb2) != 0) {
    (**(code **)(param_1 + 0xb0))
              (*(undefined4 *)(param_1 + 0xb4),param_1,param_2,param_4,param_5,param_3);
  }
  return;
}


