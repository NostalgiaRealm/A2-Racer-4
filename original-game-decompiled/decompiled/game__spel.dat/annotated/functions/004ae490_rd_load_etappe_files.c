
/* ==== rd_load_etappe_files @ 004ae490 ==== 
 * signature: undefined __fastcall rd_load_etappe_files(void * param_1)
 * body: 004ae490-004ae560
 * note: ANALYST: Loads .cmp, .dmp, .pmp with .rmp, then .omp. [confidence: confirmed] [evidence: extension strings pushed in this order]
 */

/* ANALYST: Loads .cmp, .dmp, .pmp with .rmp, then .omp. [confidence: confirmed] [evidence:
   extension strings pushed in this order] */

void __fastcall rd_load_etappe_files(void *param_1)

{
  CHAR local_200 [256];
  CHAR local_100 [256];
  
  FUN_005587a3(local_200,(byte *)s__s__s_005b058c);
  rd_load_cmp(local_200);
  FUN_004415e0();
  FUN_005587a3(local_200,(byte *)s__s__s_005b058c);
  rd_load_dmp(local_200);
  FUN_004415e0();
  FUN_005587a3(local_200,(byte *)s__s__s_005b058c);
  FUN_005587a3(local_100,(byte *)s__s__s_005b058c);
  rd_load_chunks(param_1,local_200,local_100);
  FUN_004415e0();
  FUN_005587a3(local_200,(byte *)s__s__s_005b058c);
  rd_load_omp(param_1,local_200);
  return;
}


