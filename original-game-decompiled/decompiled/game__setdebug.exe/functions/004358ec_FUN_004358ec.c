
/* ==== FUN_004358ec @ 004358ec ==== 
 * signature: undefined FUN_004358ec(void)
 * body: 004358ec-004358ff
 */

void FUN_004358ec(char *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte unaff_BH;
  byte in_AF;
  int *piVar4;
  
  bVar2 = (byte)param_1;
  *param_1 = *param_1 + bVar2;
  bVar1 = *param_2;
  *param_2 = *param_2 + unaff_BH;
  cVar3 = bVar2 + (9 < (bVar2 & 0xf) | in_AF) * -6 +
          (0x99 < bVar2 || CARRY1(bVar1,unaff_BH)) * -0x60;
  piVar4 = (int *)CONCAT31((int3)((uint)param_1 >> 8),cVar3);
  if (cVar3 != '\0') {
    *(char *)((int)piVar4 + 0x2f) = (char)param_2;
    (**(code **)(*piVar4 + 0x38))(piVar4,1,*piVar4,param_1);
  }
  return;
}


