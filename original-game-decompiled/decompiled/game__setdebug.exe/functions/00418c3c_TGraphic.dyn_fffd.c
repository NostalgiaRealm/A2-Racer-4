
/* ==== TGraphic.dyn_fffd @ 00418c3c ==== 
 * signature: undefined __register TGraphic.dyn_fffd(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6, undefined1 param_7)
 * body: 00418c3c-00418c63
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TGraphic_dyn_fffd(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  if (*(short *)(param_1 + 0x12) != 0) {
    (**(code **)(param_1 + 0x10))
              (*(undefined4 *)(param_1 + 0x14),param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


