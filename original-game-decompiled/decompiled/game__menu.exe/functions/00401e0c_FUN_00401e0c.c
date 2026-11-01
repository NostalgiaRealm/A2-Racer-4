
/* ==== FUN_00401e0c @ 00401e0c ==== 
 * signature: uint __register FUN_00401e0c(uint * param_1)
 * body: 00401e0c-00401e43
 */

uint FUN_00401e0c(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *param_1;
  if ((uVar1 & 0x80000000) != 0) {
    uVar3 = uVar1 & 0x7ffffffc;
    param_1 = (uint *)((int)param_1 + uVar3);
    uVar1 = *param_1;
  }
  if ((uVar1 & 2) == 0) {
    FUN_00401c8c((int *)param_1);
    uVar3 = uVar3 + param_1[2];
    puVar2 = (uint *)((int)param_1 + param_1[2]);
    *puVar2 = *puVar2 & 0xfffffffe;
  }
  return uVar3;
}


