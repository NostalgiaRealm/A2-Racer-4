
/* ==== FUN_004c2c11 @ 004c2c11 ==== 
 * signature: int __thiscall FUN_004c2c11(void * this, int param_1)
 * body: 004c2c11-004c2c13
 */

int __thiscall FUN_004c2c11(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this +
                  ((-*(int *)(iRamba004c2b * 2 + -0x14) - *(int *)(iRamba004c2b * 2 + -0x2d)) -
                  *(int *)(iRamba004c2b * 2 + -0x70)));
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((-1 < param_1) && (param_1 < piVar1[1])) {
    if (*(char *)(piVar1[4] + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    return param_1 * 0xb0 + *piVar1;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}


