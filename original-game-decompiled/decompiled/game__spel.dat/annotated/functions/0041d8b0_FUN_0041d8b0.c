
/* ==== FUN_0041d8b0 @ 0041d8b0 ==== 
 * signature: undefined __stdcall FUN_0041d8b0(void * param_1, int param_2, undefined4 param_3, int param_4)
 * body: 0041d8b0-0041d986;0041d98a-0041d98e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041d987-0041d989
 */

void FUN_0041d8b0(void *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041d840(param_1,param_4);
  if ((char)uVar1 == '\0') {
    switch(param_3) {
    case 0:
    case 5:
      return;
    case 1:
      FUN_0041d7f0((int)param_1,param_2,1,0xbe99999a);
      return;
    case 2:
      uVar1 = 0xbe99999a;
      break;
    case 3:
      FUN_0041d7f0((int)param_1,param_2,1,0x3f19999a);
      return;
    case 4:
      FUN_0041d7f0((int)param_1,param_2,0,0xbe99999a);
      return;
    case 6:
      uVar1 = 0x3f19999a;
      break;
    case 7:
      FUN_0041d740();
      return;
    default:
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s___d__Illegal_state_for_eyes____005949d8);
    }
    FUN_0041d7f0((int)param_1,param_2,0,uVar1);
    return;
  }
  FUN_0041d760((int)param_1,param_2);
  return;
}


