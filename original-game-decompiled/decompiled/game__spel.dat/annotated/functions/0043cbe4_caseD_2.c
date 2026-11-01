
/* ==== switchD_0043cb05::caseD_2 @ 0043cbe4 ==== 
 * signature: undefined4 __stdcall caseD_2(void)
 * body: 0043cbe4-0043cc34
 */

undefined4 switchD_0043cb05::caseD_2(void)

{
  int in_EAX;
  
  FUN_004b1210((void *)(DAT_00719b50 + in_EAX * 0x178),(&DAT_006c3bac)[DAT_006c407c * 3],
               (&DAT_006c3bb0)[DAT_006c407c * 3],(&DAT_006c3bb4)[DAT_006c407c * 3]);
  DAT_006c407c = DAT_006c407c + -2;
  if (DAT_006c407c < 0) {
    return 1;
  }
  return 0;
}


