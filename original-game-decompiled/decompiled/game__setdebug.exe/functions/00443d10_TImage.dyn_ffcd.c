
/* ==== TImage.dyn_ffcd @ 00443d10 ==== 
 * signature: undefined __register TImage.dyn_ffcd(int * param_1, undefined4 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7)
 * body: 00443d10-00443d79
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TImage_dyn_ffcd(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined3 in_register_00000005;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  if ((*(byte *)((int)param_1 + 0x13a) & (byte)param_6) != 0) {
    uVar1 = FUN_00443c78(param_1);
    if ((char)uVar1 == '\0') {
      (**(code **)(*param_1 + 0x84))();
      in_register_00000005 = extraout_var_00;
    }
    else {
      (**(code **)(*param_1 + 0x80))();
      in_register_00000005 = extraout_var;
    }
  }
  if (*(short *)((int)param_1 + 0x132) != 0) {
    (*(code *)param_1[0x4c])
              (param_1[0x4d],param_2,CONCAT31(in_register_00000005,param_3),param_4,param_5,param_6,
               param_7);
  }
  return;
}


