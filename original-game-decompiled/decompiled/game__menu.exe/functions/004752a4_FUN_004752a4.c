
/* ==== FUN_004752a4 @ 004752a4 ==== 
 * signature: undefined __register FUN_004752a4(uint param_1, int * param_2, int * param_3, LPRECT param_4, char param_5, char param_6, byte param_7, uint param_8, uint param_9, byte param_10, undefined * param_11, uint * param_12)
 * body: 004752a4-00475314
 */

void FUN_004752a4(uint param_1,int *param_2,int *param_3,LPRECT param_4,char param_5,char param_6,
                 byte param_7,uint param_8,uint param_9,byte param_10,undefined *param_11,
                 uint *param_12)

{
  uint local_10 [2];
  int *local_8;
  
  local_8 = param_3;
  FUN_00474e3c(param_1,param_2,param_3,param_4,local_10,param_5,param_8,param_9,param_10,param_11,
               param_12);
  FUN_00474cb0(param_1,param_2,(int *)local_10,param_6,param_7);
  if (param_5 != '\0') {
    FUN_00474d6c(param_1,param_2,param_11,param_7,&param_4->left);
  }
  return;
}


