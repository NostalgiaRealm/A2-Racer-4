
/* ==== FUN_00443e30 @ 00443e30 ==== 
 * signature: undefined FUN_00443e30(void)
 * body: 00443e30-00443e72
 */

void FUN_00443e30(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined7 uVar2;
  char *pcVar3;
  char unaff_BL;
  undefined4 *unaff_ESI;
  char cStack00000006;
  undefined7 in_stack_00000001;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000014;
  undefined3 uVar4;
  
  uVar2 = in_stack_00000001;
  cStack00000006 = (char)((uint7)in_stack_00000001 >> 0x28);
  *(char *)(param_1 + -0x54) = *(char *)(param_1 + -0x54) + unaff_BL;
  *(char *)(param_1 + -0x33ffbef7) = *(char *)(param_1 + -0x33ffbef7) + (char)((uint)param_1 >> 8);
  *(char *)(param_1 + -0x27ffbea8) = *(char *)(param_1 + -0x27ffbea8) + unaff_BL;
  uVar1 = *unaff_ESI;
  uVar4 = (undefined3)((uint)uVar1 >> 8);
  param_2 = (char)uVar1 + param_2;
  pcVar3 = (char *)CONCAT31(uVar4,param_2);
  *pcVar3 = *pcVar3 + param_2;
  pcVar3 = (char *)CONCAT31(uVar4,param_2 + (char)((uint)((int)uVar2 + 3) >> 8) +
                                  (char)((uint)uVar1 >> 8));
  *pcVar3 = *pcVar3 + in_stack_00000010._2_1_ + '\x01';
  pcVar3[in_stack_00000014._2_4_ * 4 + -0x550fffbc] =
       pcVar3[in_stack_00000014._2_4_ * 4 + -0x550fffbc] + cStack00000006;
  pcVar3[-0x55] = pcVar3[-0x55] + in_stack_00000010._2_1_ + '\x02';
                    /* WARNING: Could not recover jumptable at 0x00443e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000014._2_4_ * 5 + 0x44))();
  return;
}


