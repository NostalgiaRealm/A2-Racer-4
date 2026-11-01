
/* ==== FUN_0046555c @ 0046555c ==== 
 * signature: undefined1 __register FUN_0046555c(int * param_1, int param_2, undefined3 param_3)
 * body: 0046555c-004655c3
 */

undefined1 FUN_0046555c(int *param_1,int param_2,undefined3 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uStack_8;
  
  uStack_8 = CONCAT13(1,param_3);
  piVar2 = FUN_00444864(param_1);
  if ((piVar2 != (int *)0x0) && (*(char *)((int)piVar2 + 0x215) != '\0')) {
    cVar1 = FUN_00433654(piVar2,param_2);
    if (cVar1 != '\0') goto LAB_004655bb;
  }
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    uStack_8._0_3_ = CONCAT12((char)*(undefined2 *)(param_2 + 4),(undefined2)uStack_8);
    (**(code **)(*param_1 + 0x9c))(param_1,(int)&uStack_8 + 2);
    *(ushort *)(param_2 + 4) = (ushort)uStack_8._2_1_;
    if (uStack_8._2_1_ == 0) goto LAB_004655bb;
  }
  uStack_8 = 0;
LAB_004655bb:
  return uStack_8._3_1_;
}


