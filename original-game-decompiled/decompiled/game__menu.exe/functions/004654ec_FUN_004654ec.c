
/* ==== FUN_004654ec @ 004654ec ==== 
 * signature: undefined4 __register FUN_004654ec(int * param_1, int param_2)
 * body: 004654ec-0046555b
 */

undefined4 FUN_004654ec(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  undefined4 uVar4;
  
  uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  piVar3 = FUN_00444864(param_1);
  if (((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x215) != '\0')) &&
     (cVar1 = FUN_00433654(piVar3,param_2), cVar1 != '\0')) {
    return uVar4;
  }
  bVar2 = FUN_0044476c(*(uint *)(param_2 + 8));
  if (((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) &&
     ((**(code **)(*param_1 + 0x98))(param_1,param_2 + 4,bVar2), *(short *)(param_2 + 4) == 0)) {
    return uVar4;
  }
  return 0;
}


