
/* ==== TOleControl.vmt_004 @ 0046fb04 ==== 
 * signature: undefined TOleControl.vmt_004(void)
 * body: 0046fb04-0046fb37
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleControl_vmt_004(int param_1,int *param_2)

{
  TControl_vmt_004(param_1,param_2);
  (**(code **)(*param_2 + 8))
            (param_2,"ControlData",*(int *)(param_1 + 0x200) != 0,FUN_00470bdc,param_1,FUN_004702e0,
             param_1);
  return;
}


