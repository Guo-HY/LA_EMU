target_ulong helper_bitrev_w(target_ulong);
target_ulong helper_bitrev_d(target_ulong);
target_ulong helper_bitswap(target_ulong);
void helper_asrtle_d(CPULoongArchState*, target_ulong, target_ulong);
void helper_asrtgt_d(CPULoongArchState*, target_ulong, target_ulong);
target_ulong helper_crc32(target_ulong, target_ulong, target_ulong);
target_ulong helper_crc32c(target_ulong, target_ulong, target_ulong);
target_ulong helper_cpucfg(CPULoongArchState*, target_ulong);
uint64_t helper_fadd_s(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fadd_d(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fsub_s(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fsub_d(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmul_s(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmul_d(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fdiv_s(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fdiv_d(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmax_s(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmax_d(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmin_s(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmin_d(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmaxa_s(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmaxa_d(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmina_s(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmina_d(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fmuladd_s(CPULoongArchState*, uint64_t, uint64_t, uint64_t, uint32_t);
uint64_t helper_fmuladd_d(CPULoongArchState*, uint64_t, uint64_t, uint64_t, uint32_t);
uint64_t helper_fscaleb_s(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_fscaleb_d(CPULoongArchState*, uint64_t, uint64_t);
uint64_t helper_flogb_s(CPULoongArchState*, uint64_t);
uint64_t helper_flogb_d(CPULoongArchState*, uint64_t);
uint64_t helper_fsqrt_s(CPULoongArchState*, uint64_t);
uint64_t helper_fsqrt_d(CPULoongArchState*, uint64_t);
uint64_t helper_frsqrt_s(CPULoongArchState*, uint64_t);
uint64_t helper_frsqrt_d(CPULoongArchState*, uint64_t);
uint64_t helper_frecip_s(CPULoongArchState*, uint64_t);
uint64_t helper_frecip_d(CPULoongArchState*, uint64_t);
uint64_t helper_fclass_s(CPULoongArchState*, uint64_t);
uint64_t helper_fclass_d(CPULoongArchState*, uint64_t);
uint64_t helper_fcmp_c_s(CPULoongArchState*, uint64_t, uint64_t, uint32_t);
uint64_t helper_fcmp_s_s(CPULoongArchState*, uint64_t, uint64_t, uint32_t);
uint64_t helper_fcmp_c_d(CPULoongArchState*, uint64_t, uint64_t, uint32_t);
uint64_t helper_fcmp_s_d(CPULoongArchState*, uint64_t, uint64_t, uint32_t);
uint64_t helper_fcvt_d_s(CPULoongArchState*, uint64_t);
uint64_t helper_fcvt_s_d(CPULoongArchState*, uint64_t);
uint64_t helper_ffint_d_w(CPULoongArchState*, uint64_t);
uint64_t helper_ffint_d_l(CPULoongArchState*, uint64_t);
uint64_t helper_ffint_s_w(CPULoongArchState*, uint64_t);
uint64_t helper_ffint_s_l(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrm_l_s(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrm_l_d(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrm_w_s(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrm_w_d(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrp_l_s(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrp_l_d(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrp_w_s(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrp_w_d(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrz_l_s(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrz_l_d(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrz_w_s(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrz_w_d(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrne_l_s(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrne_l_d(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrne_w_s(CPULoongArchState*, uint64_t);
uint64_t helper_ftintrne_w_d(CPULoongArchState*, uint64_t);
uint64_t helper_ftint_l_s(CPULoongArchState*, uint64_t);
uint64_t helper_ftint_l_d(CPULoongArchState*, uint64_t);
uint64_t helper_ftint_w_s(CPULoongArchState*, uint64_t);
uint64_t helper_ftint_w_d(CPULoongArchState*, uint64_t);
uint64_t helper_frint_s(CPULoongArchState*, uint64_t);
uint64_t helper_frint_d(CPULoongArchState*, uint64_t);
void helper_set_rounding_mode(CPULoongArchState*);
uint64_t helper_rdtime_d(CPULoongArchState*);
uint64_t helper_csrrd_pgd(CPULoongArchState*);
uint64_t helper_csrrd_cpuid(CPULoongArchState*);
uint64_t helper_csrrd_tval(CPULoongArchState*);
uint64_t helper_csrwr_estat(CPULoongArchState*, target_ulong);
uint64_t helper_csrwr_asid(CPULoongArchState*, target_ulong);
uint64_t helper_csrwr_tcfg(CPULoongArchState*, target_ulong);
uint64_t helper_csrwr_ticlr(CPULoongArchState*, target_ulong);
uint64_t helper_iocsrrd_b(CPULoongArchState*, target_ulong);
uint64_t helper_iocsrrd_h(CPULoongArchState*, target_ulong);
uint64_t helper_iocsrrd_w(CPULoongArchState*, target_ulong);
uint64_t helper_iocsrrd_d(CPULoongArchState*, target_ulong);
void helper_iocsrwr_b(CPULoongArchState*, target_ulong, target_ulong);
void helper_iocsrwr_h(CPULoongArchState*, target_ulong, target_ulong);
void helper_iocsrwr_w(CPULoongArchState*, target_ulong, target_ulong);
void helper_iocsrwr_d(CPULoongArchState*, target_ulong, target_ulong);
void helper_tlbwr(CPULoongArchState*);
void helper_tlbfill(CPULoongArchState*);
void helper_tlbsrch(CPULoongArchState*);
void helper_tlbrd(CPULoongArchState*);
void helper_tlbclr(CPULoongArchState*);
void helper_tlbflush(CPULoongArchState*);
void helper_invtlb_all(CPULoongArchState*);
void helper_invtlb_all_g(CPULoongArchState*, uint32_t);
void helper_invtlb_all_asid(CPULoongArchState*, target_ulong);
void helper_invtlb_page_asid(CPULoongArchState*, target_ulong, target_ulong);
void helper_invtlb_page_asid_or_g(CPULoongArchState*, target_ulong, target_ulong);
target_ulong helper_lddir(CPULoongArchState*, target_ulong, target_ulong, uint32_t, target_ulong*);
void helper_ldpte(CPULoongArchState*, target_ulong, target_ulong, uint32_t, target_ulong*);
void helper_ertn(CPULoongArchState*);
void helper_idle(CPULoongArchState*);
void helper_vhaddw_h_b(void*, void*, void*, uint32_t);
void helper_vhaddw_w_h(void*, void*, void*, uint32_t);
void helper_vhaddw_d_w(void*, void*, void*, uint32_t);
void helper_vhaddw_q_d(void*, void*, void*, uint32_t);
void helper_vhaddw_hu_bu(void*, void*, void*, uint32_t);
void helper_vhaddw_wu_hu(void*, void*, void*, uint32_t);
void helper_vhaddw_du_wu(void*, void*, void*, uint32_t);
void helper_vhaddw_qu_du(void*, void*, void*, uint32_t);
void helper_vhsubw_h_b(void*, void*, void*, uint32_t);
void helper_vhsubw_w_h(void*, void*, void*, uint32_t);
void helper_vhsubw_d_w(void*, void*, void*, uint32_t);
void helper_vhsubw_q_d(void*, void*, void*, uint32_t);
void helper_vhsubw_hu_bu(void*, void*, void*, uint32_t);
void helper_vhsubw_wu_hu(void*, void*, void*, uint32_t);
void helper_vhsubw_du_wu(void*, void*, void*, uint32_t);
void helper_vhsubw_qu_du(void*, void*, void*, uint32_t);
void helper_vaddwev_h_b(void*, void*, void*, uint32_t);
void helper_vaddwev_w_h(void*, void*, void*, uint32_t);
void helper_vaddwev_d_w(void*, void*, void*, uint32_t);
void helper_vaddwev_q_d(void*, void*, void*, uint32_t);
void helper_vaddwod_h_b(void*, void*, void*, uint32_t);
void helper_vaddwod_w_h(void*, void*, void*, uint32_t);
void helper_vaddwod_d_w(void*, void*, void*, uint32_t);
void helper_vaddwod_q_d(void*, void*, void*, uint32_t);
void helper_vsubwev_h_b(void*, void*, void*, uint32_t);
void helper_vsubwev_w_h(void*, void*, void*, uint32_t);
void helper_vsubwev_d_w(void*, void*, void*, uint32_t);
void helper_vsubwev_q_d(void*, void*, void*, uint32_t);
void helper_vsubwod_h_b(void*, void*, void*, uint32_t);
void helper_vsubwod_w_h(void*, void*, void*, uint32_t);
void helper_vsubwod_d_w(void*, void*, void*, uint32_t);
void helper_vsubwod_q_d(void*, void*, void*, uint32_t);
void helper_vaddwev_h_bu(void*, void*, void*, uint32_t);
void helper_vaddwev_w_hu(void*, void*, void*, uint32_t);
void helper_vaddwev_d_wu(void*, void*, void*, uint32_t);
void helper_vaddwev_q_du(void*, void*, void*, uint32_t);
void helper_vaddwod_h_bu(void*, void*, void*, uint32_t);
void helper_vaddwod_w_hu(void*, void*, void*, uint32_t);
void helper_vaddwod_d_wu(void*, void*, void*, uint32_t);
void helper_vaddwod_q_du(void*, void*, void*, uint32_t);
void helper_vsubwev_h_bu(void*, void*, void*, uint32_t);
void helper_vsubwev_w_hu(void*, void*, void*, uint32_t);
void helper_vsubwev_d_wu(void*, void*, void*, uint32_t);
void helper_vsubwev_q_du(void*, void*, void*, uint32_t);
void helper_vsubwod_h_bu(void*, void*, void*, uint32_t);
void helper_vsubwod_w_hu(void*, void*, void*, uint32_t);
void helper_vsubwod_d_wu(void*, void*, void*, uint32_t);
void helper_vsubwod_q_du(void*, void*, void*, uint32_t);
void helper_vaddwev_h_bu_b(void*, void*, void*, uint32_t);
void helper_vaddwev_w_hu_h(void*, void*, void*, uint32_t);
void helper_vaddwev_d_wu_w(void*, void*, void*, uint32_t);
void helper_vaddwev_q_du_d(void*, void*, void*, uint32_t);
void helper_vaddwod_h_bu_b(void*, void*, void*, uint32_t);
void helper_vaddwod_w_hu_h(void*, void*, void*, uint32_t);
void helper_vaddwod_d_wu_w(void*, void*, void*, uint32_t);
void helper_vaddwod_q_du_d(void*, void*, void*, uint32_t);
void helper_vavg_b(void*, void*, void*, uint32_t);
void helper_vavg_h(void*, void*, void*, uint32_t);
void helper_vavg_w(void*, void*, void*, uint32_t);
void helper_vavg_d(void*, void*, void*, uint32_t);
void helper_vavg_bu(void*, void*, void*, uint32_t);
void helper_vavg_hu(void*, void*, void*, uint32_t);
void helper_vavg_wu(void*, void*, void*, uint32_t);
void helper_vavg_du(void*, void*, void*, uint32_t);
void helper_vavgr_b(void*, void*, void*, uint32_t);
void helper_vavgr_h(void*, void*, void*, uint32_t);
void helper_vavgr_w(void*, void*, void*, uint32_t);
void helper_vavgr_d(void*, void*, void*, uint32_t);
void helper_vavgr_bu(void*, void*, void*, uint32_t);
void helper_vavgr_hu(void*, void*, void*, uint32_t);
void helper_vavgr_wu(void*, void*, void*, uint32_t);
void helper_vavgr_du(void*, void*, void*, uint32_t);
void helper_vabsd_b(void*, void*, void*, uint32_t);
void helper_vabsd_h(void*, void*, void*, uint32_t);
void helper_vabsd_w(void*, void*, void*, uint32_t);
void helper_vabsd_d(void*, void*, void*, uint32_t);
void helper_vabsd_bu(void*, void*, void*, uint32_t);
void helper_vabsd_hu(void*, void*, void*, uint32_t);
void helper_vabsd_wu(void*, void*, void*, uint32_t);
void helper_vabsd_du(void*, void*, void*, uint32_t);
void helper_vadda_b(void*, void*, void*, uint32_t);
void helper_vadda_h(void*, void*, void*, uint32_t);
void helper_vadda_w(void*, void*, void*, uint32_t);
void helper_vadda_d(void*, void*, void*, uint32_t);
void helper_vmini_b(void*, void*, uint64_t, uint32_t);
void helper_vmini_h(void*, void*, uint64_t, uint32_t);
void helper_vmini_w(void*, void*, uint64_t, uint32_t);
void helper_vmini_d(void*, void*, uint64_t, uint32_t);
void helper_vmini_bu(void*, void*, uint64_t, uint32_t);
void helper_vmini_hu(void*, void*, uint64_t, uint32_t);
void helper_vmini_wu(void*, void*, uint64_t, uint32_t);
void helper_vmini_du(void*, void*, uint64_t, uint32_t);
void helper_vmaxi_b(void*, void*, uint64_t, uint32_t);
void helper_vmaxi_h(void*, void*, uint64_t, uint32_t);
void helper_vmaxi_w(void*, void*, uint64_t, uint32_t);
void helper_vmaxi_d(void*, void*, uint64_t, uint32_t);
void helper_vmaxi_bu(void*, void*, uint64_t, uint32_t);
void helper_vmaxi_hu(void*, void*, uint64_t, uint32_t);
void helper_vmaxi_wu(void*, void*, uint64_t, uint32_t);
void helper_vmaxi_du(void*, void*, uint64_t, uint32_t);
void helper_vmuh_b(void*, void*, void*, uint32_t);
void helper_vmuh_h(void*, void*, void*, uint32_t);
void helper_vmuh_w(void*, void*, void*, uint32_t);
void helper_vmuh_d(void*, void*, void*, uint32_t);
void helper_vmuh_bu(void*, void*, void*, uint32_t);
void helper_vmuh_hu(void*, void*, void*, uint32_t);
void helper_vmuh_wu(void*, void*, void*, uint32_t);
void helper_vmuh_du(void*, void*, void*, uint32_t);
void helper_vmulwev_h_b(void*, void*, void*, uint32_t);
void helper_vmulwev_w_h(void*, void*, void*, uint32_t);
void helper_vmulwev_d_w(void*, void*, void*, uint32_t);
void helper_vmulwod_h_b(void*, void*, void*, uint32_t);
void helper_vmulwod_w_h(void*, void*, void*, uint32_t);
void helper_vmulwod_d_w(void*, void*, void*, uint32_t);
void helper_vmulwev_h_bu(void*, void*, void*, uint32_t);
void helper_vmulwev_w_hu(void*, void*, void*, uint32_t);
void helper_vmulwev_d_wu(void*, void*, void*, uint32_t);
void helper_vmulwod_h_bu(void*, void*, void*, uint32_t);
void helper_vmulwod_w_hu(void*, void*, void*, uint32_t);
void helper_vmulwod_d_wu(void*, void*, void*, uint32_t);
void helper_vmulwev_h_bu_b(void*, void*, void*, uint32_t);
void helper_vmulwev_w_hu_h(void*, void*, void*, uint32_t);
void helper_vmulwev_d_wu_w(void*, void*, void*, uint32_t);
void helper_vmulwod_h_bu_b(void*, void*, void*, uint32_t);
void helper_vmulwod_w_hu_h(void*, void*, void*, uint32_t);
void helper_vmulwod_d_wu_w(void*, void*, void*, uint32_t);
void helper_vmadd_b(void*, void*, void*, uint32_t);
void helper_vmadd_h(void*, void*, void*, uint32_t);
void helper_vmadd_w(void*, void*, void*, uint32_t);
void helper_vmadd_d(void*, void*, void*, uint32_t);
void helper_vmsub_b(void*, void*, void*, uint32_t);
void helper_vmsub_h(void*, void*, void*, uint32_t);
void helper_vmsub_w(void*, void*, void*, uint32_t);
void helper_vmsub_d(void*, void*, void*, uint32_t);
void helper_vmaddwev_h_b(void*, void*, void*, uint32_t);
void helper_vmaddwev_w_h(void*, void*, void*, uint32_t);
void helper_vmaddwev_d_w(void*, void*, void*, uint32_t);
void helper_vmaddwod_h_b(void*, void*, void*, uint32_t);
void helper_vmaddwod_w_h(void*, void*, void*, uint32_t);
void helper_vmaddwod_d_w(void*, void*, void*, uint32_t);
void helper_vmaddwev_h_bu(void*, void*, void*, uint32_t);
void helper_vmaddwev_w_hu(void*, void*, void*, uint32_t);
void helper_vmaddwev_d_wu(void*, void*, void*, uint32_t);
void helper_vmaddwod_h_bu(void*, void*, void*, uint32_t);
void helper_vmaddwod_w_hu(void*, void*, void*, uint32_t);
void helper_vmaddwod_d_wu(void*, void*, void*, uint32_t);
void helper_vmaddwev_h_bu_b(void*, void*, void*, uint32_t);
void helper_vmaddwev_w_hu_h(void*, void*, void*, uint32_t);
void helper_vmaddwev_d_wu_w(void*, void*, void*, uint32_t);
void helper_vmaddwod_h_bu_b(void*, void*, void*, uint32_t);
void helper_vmaddwod_w_hu_h(void*, void*, void*, uint32_t);
void helper_vmaddwod_d_wu_w(void*, void*, void*, uint32_t);
void helper_vdiv_b(void*, void*, void*, uint32_t);
void helper_vdiv_h(void*, void*, void*, uint32_t);
void helper_vdiv_w(void*, void*, void*, uint32_t);
void helper_vdiv_d(void*, void*, void*, uint32_t);
void helper_vdiv_bu(void*, void*, void*, uint32_t);
void helper_vdiv_hu(void*, void*, void*, uint32_t);
void helper_vdiv_wu(void*, void*, void*, uint32_t);
void helper_vdiv_du(void*, void*, void*, uint32_t);
void helper_vmod_b(void*, void*, void*, uint32_t);
void helper_vmod_h(void*, void*, void*, uint32_t);
void helper_vmod_w(void*, void*, void*, uint32_t);
void helper_vmod_d(void*, void*, void*, uint32_t);
void helper_vmod_bu(void*, void*, void*, uint32_t);
void helper_vmod_hu(void*, void*, void*, uint32_t);
void helper_vmod_wu(void*, void*, void*, uint32_t);
void helper_vmod_du(void*, void*, void*, uint32_t);
void helper_vsat_b(void*, void*, uint64_t, uint32_t);
void helper_vsat_h(void*, void*, uint64_t, uint32_t);
void helper_vsat_w(void*, void*, uint64_t, uint32_t);
void helper_vsat_d(void*, void*, uint64_t, uint32_t);
void helper_vsat_bu(void*, void*, uint64_t, uint32_t);
void helper_vsat_hu(void*, void*, uint64_t, uint32_t);
void helper_vsat_wu(void*, void*, uint64_t, uint32_t);
void helper_vsat_du(void*, void*, uint64_t, uint32_t);
void helper_vexth_h_b(void*, void*, uint32_t);
void helper_vexth_w_h(void*, void*, uint32_t);
void helper_vexth_d_w(void*, void*, uint32_t);
void helper_vexth_q_d(void*, void*, uint32_t);
void helper_vexth_hu_bu(void*, void*, uint32_t);
void helper_vexth_wu_hu(void*, void*, uint32_t);
void helper_vexth_du_wu(void*, void*, uint32_t);
void helper_vexth_qu_du(void*, void*, uint32_t);
void helper_vext2xv_h_b(void*, void*, uint32_t);
void helper_vext2xv_w_b(void*, void*, uint32_t);
void helper_vext2xv_d_b(void*, void*, uint32_t);
void helper_vext2xv_w_h(void*, void*, uint32_t);
void helper_vext2xv_d_h(void*, void*, uint32_t);
void helper_vext2xv_d_w(void*, void*, uint32_t);
void helper_vext2xv_hu_bu(void*, void*, uint32_t);
void helper_vext2xv_wu_bu(void*, void*, uint32_t);
void helper_vext2xv_du_bu(void*, void*, uint32_t);
void helper_vext2xv_wu_hu(void*, void*, uint32_t);
void helper_vext2xv_du_hu(void*, void*, uint32_t);
void helper_vext2xv_du_wu(void*, void*, uint32_t);
void helper_vsigncov_b(void*, void*, void*, uint32_t);
void helper_vsigncov_h(void*, void*, void*, uint32_t);
void helper_vsigncov_w(void*, void*, void*, uint32_t);
void helper_vsigncov_d(void*, void*, void*, uint32_t);
void helper_vmskltz_b(void*, void*, uint32_t);
void helper_vmskltz_h(void*, void*, uint32_t);
void helper_vmskltz_w(void*, void*, uint32_t);
void helper_vmskltz_d(void*, void*, uint32_t);
void helper_vmskgez_b(void*, void*, uint32_t);
void helper_vmsknz_b(void*, void*, uint32_t);
void helper_vnori_b(void*, void*, uint64_t, uint32_t);
void helper_vsllwil_h_b(void*, void*, uint64_t, uint32_t);
void helper_vsllwil_w_h(void*, void*, uint64_t, uint32_t);
void helper_vsllwil_d_w(void*, void*, uint64_t, uint32_t);
void helper_vextl_q_d(void*, void*, uint32_t);
void helper_vsllwil_hu_bu(void*, void*, uint64_t, uint32_t);
void helper_vsllwil_wu_hu(void*, void*, uint64_t, uint32_t);
void helper_vsllwil_du_wu(void*, void*, uint64_t, uint32_t);
void helper_vextl_qu_du(void*, void*, uint32_t);
void helper_vsrlr_b(void*, void*, void*, uint32_t);
void helper_vsrlr_h(void*, void*, void*, uint32_t);
void helper_vsrlr_w(void*, void*, void*, uint32_t);
void helper_vsrlr_d(void*, void*, void*, uint32_t);
void helper_vsrlri_b(void*, void*, uint64_t, uint32_t);
void helper_vsrlri_h(void*, void*, uint64_t, uint32_t);
void helper_vsrlri_w(void*, void*, uint64_t, uint32_t);
void helper_vsrlri_d(void*, void*, uint64_t, uint32_t);
void helper_vsrar_b(void*, void*, void*, uint32_t);
void helper_vsrar_h(void*, void*, void*, uint32_t);
void helper_vsrar_w(void*, void*, void*, uint32_t);
void helper_vsrar_d(void*, void*, void*, uint32_t);
void helper_vsrari_b(void*, void*, uint64_t, uint32_t);
void helper_vsrari_h(void*, void*, uint64_t, uint32_t);
void helper_vsrari_w(void*, void*, uint64_t, uint32_t);
void helper_vsrari_d(void*, void*, uint64_t, uint32_t);
void helper_vsrln_b_h(void*, void*, void*, uint32_t);
void helper_vsrln_h_w(void*, void*, void*, uint32_t);
void helper_vsrln_w_d(void*, void*, void*, uint32_t);
void helper_vsran_b_h(void*, void*, void*, uint32_t);
void helper_vsran_h_w(void*, void*, void*, uint32_t);
void helper_vsran_w_d(void*, void*, void*, uint32_t);
void helper_vsrlni_b_h(void*, void*, uint64_t, uint32_t);
void helper_vsrlni_h_w(void*, void*, uint64_t, uint32_t);
void helper_vsrlni_w_d(void*, void*, uint64_t, uint32_t);
void helper_vsrlni_d_q(void*, void*, uint64_t, uint32_t);
void helper_vsrani_b_h(void*, void*, uint64_t, uint32_t);
void helper_vsrani_h_w(void*, void*, uint64_t, uint32_t);
void helper_vsrani_w_d(void*, void*, uint64_t, uint32_t);
void helper_vsrani_d_q(void*, void*, uint64_t, uint32_t);
void helper_vsrlrn_b_h(void*, void*, void*, uint32_t);
void helper_vsrlrn_h_w(void*, void*, void*, uint32_t);
void helper_vsrlrn_w_d(void*, void*, void*, uint32_t);
void helper_vsrarn_b_h(void*, void*, void*, uint32_t);
void helper_vsrarn_h_w(void*, void*, void*, uint32_t);
void helper_vsrarn_w_d(void*, void*, void*, uint32_t);
void helper_vsrlrni_b_h(void*, void*, uint64_t, uint32_t);
void helper_vsrlrni_h_w(void*, void*, uint64_t, uint32_t);
void helper_vsrlrni_w_d(void*, void*, uint64_t, uint32_t);
void helper_vsrlrni_d_q(void*, void*, uint64_t, uint32_t);
void helper_vsrarni_b_h(void*, void*, uint64_t, uint32_t);
void helper_vsrarni_h_w(void*, void*, uint64_t, uint32_t);
void helper_vsrarni_w_d(void*, void*, uint64_t, uint32_t);
void helper_vsrarni_d_q(void*, void*, uint64_t, uint32_t);
void helper_vssrln_b_h(void*, void*, void*, uint32_t);
void helper_vssrln_h_w(void*, void*, void*, uint32_t);
void helper_vssrln_w_d(void*, void*, void*, uint32_t);
void helper_vssran_b_h(void*, void*, void*, uint32_t);
void helper_vssran_h_w(void*, void*, void*, uint32_t);
void helper_vssran_w_d(void*, void*, void*, uint32_t);
void helper_vssrln_bu_h(void*, void*, void*, uint32_t);
void helper_vssrln_hu_w(void*, void*, void*, uint32_t);
void helper_vssrln_wu_d(void*, void*, void*, uint32_t);
void helper_vssran_bu_h(void*, void*, void*, uint32_t);
void helper_vssran_hu_w(void*, void*, void*, uint32_t);
void helper_vssran_wu_d(void*, void*, void*, uint32_t);
void helper_vssrlni_b_h(void*, void*, uint64_t, uint32_t);
void helper_vssrlni_h_w(void*, void*, uint64_t, uint32_t);
void helper_vssrlni_w_d(void*, void*, uint64_t, uint32_t);
void helper_vssrlni_d_q(void*, void*, uint64_t, uint32_t);
void helper_vssrani_b_h(void*, void*, uint64_t, uint32_t);
void helper_vssrani_h_w(void*, void*, uint64_t, uint32_t);
void helper_vssrani_w_d(void*, void*, uint64_t, uint32_t);
void helper_vssrani_d_q(void*, void*, uint64_t, uint32_t);
void helper_vssrlni_bu_h(void*, void*, uint64_t, uint32_t);
void helper_vssrlni_hu_w(void*, void*, uint64_t, uint32_t);
void helper_vssrlni_wu_d(void*, void*, uint64_t, uint32_t);
void helper_vssrlni_du_q(void*, void*, uint64_t, uint32_t);
void helper_vssrani_bu_h(void*, void*, uint64_t, uint32_t);
void helper_vssrani_hu_w(void*, void*, uint64_t, uint32_t);
void helper_vssrani_wu_d(void*, void*, uint64_t, uint32_t);
void helper_vssrani_du_q(void*, void*, uint64_t, uint32_t);
void helper_vssrlrn_b_h(void*, void*, void*, uint32_t);
void helper_vssrlrn_h_w(void*, void*, void*, uint32_t);
void helper_vssrlrn_w_d(void*, void*, void*, uint32_t);
void helper_vssrarn_b_h(void*, void*, void*, uint32_t);
void helper_vssrarn_h_w(void*, void*, void*, uint32_t);
void helper_vssrarn_w_d(void*, void*, void*, uint32_t);
void helper_vssrlrn_bu_h(void*, void*, void*, uint32_t);
void helper_vssrlrn_hu_w(void*, void*, void*, uint32_t);
void helper_vssrlrn_wu_d(void*, void*, void*, uint32_t);
void helper_vssrarn_bu_h(void*, void*, void*, uint32_t);
void helper_vssrarn_hu_w(void*, void*, void*, uint32_t);
void helper_vssrarn_wu_d(void*, void*, void*, uint32_t);
void helper_vssrlrni_b_h(void*, void*, uint64_t, uint32_t);
void helper_vssrlrni_h_w(void*, void*, uint64_t, uint32_t);
void helper_vssrlrni_w_d(void*, void*, uint64_t, uint32_t);
void helper_vssrlrni_d_q(void*, void*, uint64_t, uint32_t);
void helper_vssrarni_b_h(void*, void*, uint64_t, uint32_t);
void helper_vssrarni_h_w(void*, void*, uint64_t, uint32_t);
void helper_vssrarni_w_d(void*, void*, uint64_t, uint32_t);
void helper_vssrarni_d_q(void*, void*, uint64_t, uint32_t);
void helper_vssrlrni_bu_h(void*, void*, uint64_t, uint32_t);
void helper_vssrlrni_hu_w(void*, void*, uint64_t, uint32_t);
void helper_vssrlrni_wu_d(void*, void*, uint64_t, uint32_t);
void helper_vssrlrni_du_q(void*, void*, uint64_t, uint32_t);
void helper_vssrarni_bu_h(void*, void*, uint64_t, uint32_t);
void helper_vssrarni_hu_w(void*, void*, uint64_t, uint32_t);
void helper_vssrarni_wu_d(void*, void*, uint64_t, uint32_t);
void helper_vssrarni_du_q(void*, void*, uint64_t, uint32_t);
void helper_vclo_b(void*, void*, uint32_t);
void helper_vclo_h(void*, void*, uint32_t);
void helper_vclo_w(void*, void*, uint32_t);
void helper_vclo_d(void*, void*, uint32_t);
void helper_vclz_b(void*, void*, uint32_t);
void helper_vclz_h(void*, void*, uint32_t);
void helper_vclz_w(void*, void*, uint32_t);
void helper_vclz_d(void*, void*, uint32_t);
void helper_vpcnt_b(void*, void*, uint32_t);
void helper_vpcnt_h(void*, void*, uint32_t);
void helper_vpcnt_w(void*, void*, uint32_t);
void helper_vpcnt_d(void*, void*, uint32_t);
void helper_vbitclr_b(void*, void*, void*, uint32_t);
void helper_vbitclr_h(void*, void*, void*, uint32_t);
void helper_vbitclr_w(void*, void*, void*, uint32_t);
void helper_vbitclr_d(void*, void*, void*, uint32_t);
void helper_vbitclri_b(void*, void*, uint64_t, uint32_t);
void helper_vbitclri_h(void*, void*, uint64_t, uint32_t);
void helper_vbitclri_w(void*, void*, uint64_t, uint32_t);
void helper_vbitclri_d(void*, void*, uint64_t, uint32_t);
void helper_vbitset_b(void*, void*, void*, uint32_t);
void helper_vbitset_h(void*, void*, void*, uint32_t);
void helper_vbitset_w(void*, void*, void*, uint32_t);
void helper_vbitset_d(void*, void*, void*, uint32_t);
void helper_vbitseti_b(void*, void*, uint64_t, uint32_t);
void helper_vbitseti_h(void*, void*, uint64_t, uint32_t);
void helper_vbitseti_w(void*, void*, uint64_t, uint32_t);
void helper_vbitseti_d(void*, void*, uint64_t, uint32_t);
void helper_vbitrev_b(void*, void*, void*, uint32_t);
void helper_vbitrev_h(void*, void*, void*, uint32_t);
void helper_vbitrev_w(void*, void*, void*, uint32_t);
void helper_vbitrev_d(void*, void*, void*, uint32_t);
void helper_vbitrevi_b(void*, void*, uint64_t, uint32_t);
void helper_vbitrevi_h(void*, void*, uint64_t, uint32_t);
void helper_vbitrevi_w(void*, void*, uint64_t, uint32_t);
void helper_vbitrevi_d(void*, void*, uint64_t, uint32_t);
void helper_vfrstp_b(void*, void*, void*, uint32_t);
void helper_vfrstp_h(void*, void*, void*, uint32_t);
void helper_vfrstpi_b(void*, void*, uint64_t, uint32_t);
void helper_vfrstpi_h(void*, void*, uint64_t, uint32_t);
void helper_vfadd_s(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfadd_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfsub_s(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfsub_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmul_s(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmul_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfdiv_s(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfdiv_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmadd_s(void*, void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmadd_d(void*, void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmsub_s(void*, void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmsub_d(void*, void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfnmadd_s(void*, void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfnmadd_d(void*, void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfnmsub_s(void*, void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfnmsub_d(void*, void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmax_s(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmax_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmin_s(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmin_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmaxa_s(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmaxa_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmina_s(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfmina_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vflogb_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vflogb_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfclass_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfclass_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfsqrt_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfsqrt_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrecip_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrecip_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrsqrt_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrsqrt_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfcvtl_s_h(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfcvth_s_h(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfcvtl_d_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfcvth_d_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfcvt_h_s(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfcvt_s_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrintrne_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrintrne_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrintrz_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrintrz_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrintrp_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrintrp_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrintrm_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrintrm_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrint_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vfrint_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrne_w_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrne_l_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrz_w_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrz_l_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrp_w_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrp_l_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrm_w_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrm_l_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftint_w_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftint_l_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrz_wu_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrz_lu_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftint_wu_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftint_lu_d(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrne_w_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrz_w_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrp_w_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrm_w_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vftint_w_d(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrnel_l_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrneh_l_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrzl_l_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrzh_l_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrpl_l_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrph_l_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrml_l_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintrmh_l_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftintl_l_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vftinth_l_s(void*, void*, CPULoongArchState*, uint32_t);
void helper_vffint_s_w(void*, void*, CPULoongArchState*, uint32_t);
void helper_vffint_d_l(void*, void*, CPULoongArchState*, uint32_t);
void helper_vffint_s_wu(void*, void*, CPULoongArchState*, uint32_t);
void helper_vffint_d_lu(void*, void*, CPULoongArchState*, uint32_t);
void helper_vffintl_d_w(void*, void*, CPULoongArchState*, uint32_t);
void helper_vffinth_d_w(void*, void*, CPULoongArchState*, uint32_t);
void helper_vffint_s_l(void*, void*, void*, CPULoongArchState*, uint32_t);
void helper_vseqi_b(void*, void*, uint64_t, uint32_t);
void helper_vseqi_h(void*, void*, uint64_t, uint32_t);
void helper_vseqi_w(void*, void*, uint64_t, uint32_t);
void helper_vseqi_d(void*, void*, uint64_t, uint32_t);
void helper_vslei_b(void*, void*, uint64_t, uint32_t);
void helper_vslei_h(void*, void*, uint64_t, uint32_t);
void helper_vslei_w(void*, void*, uint64_t, uint32_t);
void helper_vslei_d(void*, void*, uint64_t, uint32_t);
void helper_vslei_bu(void*, void*, uint64_t, uint32_t);
void helper_vslei_hu(void*, void*, uint64_t, uint32_t);
void helper_vslei_wu(void*, void*, uint64_t, uint32_t);
void helper_vslei_du(void*, void*, uint64_t, uint32_t);
void helper_vslti_b(void*, void*, uint64_t, uint32_t);
void helper_vslti_h(void*, void*, uint64_t, uint32_t);
void helper_vslti_w(void*, void*, uint64_t, uint32_t);
void helper_vslti_d(void*, void*, uint64_t, uint32_t);
void helper_vslti_bu(void*, void*, uint64_t, uint32_t);
void helper_vslti_hu(void*, void*, uint64_t, uint32_t);
void helper_vslti_wu(void*, void*, uint64_t, uint32_t);
void helper_vslti_du(void*, void*, uint64_t, uint32_t);
void helper_vfcmp_c_s(CPULoongArchState*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void helper_vfcmp_s_s(CPULoongArchState*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void helper_vfcmp_c_d(CPULoongArchState*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void helper_vfcmp_s_d(CPULoongArchState*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void helper_vbitseli_b(void*, void*, uint64_t, uint32_t);
void helper_vsetanyeqz_b(CPULoongArchState*, uint32_t, uint32_t, uint32_t);
void helper_vsetanyeqz_h(CPULoongArchState*, uint32_t, uint32_t, uint32_t);
void helper_vsetanyeqz_w(CPULoongArchState*, uint32_t, uint32_t, uint32_t);
void helper_vsetanyeqz_d(CPULoongArchState*, uint32_t, uint32_t, uint32_t);
void helper_vsetallnez_b(CPULoongArchState*, uint32_t, uint32_t, uint32_t);
void helper_vsetallnez_h(CPULoongArchState*, uint32_t, uint32_t, uint32_t);
void helper_vsetallnez_w(CPULoongArchState*, uint32_t, uint32_t, uint32_t);
void helper_vsetallnez_d(CPULoongArchState*, uint32_t, uint32_t, uint32_t);
void helper_xvinsve0_w(void*, void*, uint64_t, uint32_t);
void helper_xvinsve0_d(void*, void*, uint64_t, uint32_t);
void helper_xvpickve_w(void*, void*, uint64_t, uint32_t);
void helper_xvpickve_d(void*, void*, uint64_t, uint32_t);
void helper_vpackev_b(void*, void*, void*, uint32_t);
void helper_vpackev_h(void*, void*, void*, uint32_t);
void helper_vpackev_w(void*, void*, void*, uint32_t);
void helper_vpackev_d(void*, void*, void*, uint32_t);
void helper_vpackod_b(void*, void*, void*, uint32_t);
void helper_vpackod_h(void*, void*, void*, uint32_t);
void helper_vpackod_w(void*, void*, void*, uint32_t);
void helper_vpackod_d(void*, void*, void*, uint32_t);
void helper_vpickev_b(void*, void*, void*, uint32_t);
void helper_vpickev_h(void*, void*, void*, uint32_t);
void helper_vpickev_w(void*, void*, void*, uint32_t);
void helper_vpickev_d(void*, void*, void*, uint32_t);
void helper_vpickod_b(void*, void*, void*, uint32_t);
void helper_vpickod_h(void*, void*, void*, uint32_t);
void helper_vpickod_w(void*, void*, void*, uint32_t);
void helper_vpickod_d(void*, void*, void*, uint32_t);
void helper_vilvl_b(void*, void*, void*, uint32_t);
void helper_vilvl_h(void*, void*, void*, uint32_t);
void helper_vilvl_w(void*, void*, void*, uint32_t);
void helper_vilvl_d(void*, void*, void*, uint32_t);
void helper_vilvh_b(void*, void*, void*, uint32_t);
void helper_vilvh_h(void*, void*, void*, uint32_t);
void helper_vilvh_w(void*, void*, void*, uint32_t);
void helper_vilvh_d(void*, void*, void*, uint32_t);
void helper_vshuf_b(void*, void*, void*, void*, uint32_t);
void helper_vshuf_h(void*, void*, void*, uint32_t);
void helper_vshuf_w(void*, void*, void*, uint32_t);
void helper_vshuf_d(void*, void*, void*, uint32_t);
void helper_vshuf4i_b(void*, void*, uint64_t, uint32_t);
void helper_vshuf4i_h(void*, void*, uint64_t, uint32_t);
void helper_vshuf4i_w(void*, void*, uint64_t, uint32_t);
void helper_vshuf4i_d(void*, void*, uint64_t, uint32_t);
void helper_vperm_w(void*, void*, void*, uint32_t);
void helper_vpermi_w(void*, void*, uint64_t, uint32_t);
void helper_vpermi_d(void*, void*, uint64_t, uint32_t);
void helper_vpermi_q(void*, void*, uint64_t, uint32_t);
void helper_vextrins_b(void*, void*, uint64_t, uint32_t);
void helper_vextrins_h(void*, void*, uint64_t, uint32_t);
void helper_vextrins_w(void*, void*, uint64_t, uint32_t);
void helper_vextrins_d(void*, void*, uint64_t, uint32_t);


void helper_gvec_ssadd8(void*, void*, void*, uint32_t);
void helper_gvec_ssadd16(void*, void*, void*, uint32_t);
void helper_gvec_ssadd32(void*, void*, void*, uint32_t);
void helper_gvec_ssadd64(void*, void*, void*, uint32_t);

void helper_gvec_sssub8(void*, void*, void*, uint32_t);
void helper_gvec_sssub16(void*, void*, void*, uint32_t);
void helper_gvec_sssub32(void*, void*, void*, uint32_t);
void helper_gvec_sssub64(void*, void*, void*, uint32_t);

void helper_gvec_usadd8(void*, void*, void*, uint32_t);
void helper_gvec_usadd16(void*, void*, void*, uint32_t);
void helper_gvec_usadd32(void*, void*, void*, uint32_t);
void helper_gvec_usadd64(void*, void*, void*, uint32_t);

void helper_gvec_ussub8(void*, void*, void*, uint32_t);
void helper_gvec_ussub16(void*, void*, void*, uint32_t);
void helper_gvec_ussub32(void*, void*, void*, uint32_t);
void helper_gvec_ussub64(void*, void*, void*, uint32_t);

void helper_gvec_rotl8v(void*, void*, void*, uint32_t);
void helper_gvec_rotl16v(void*, void*, void*, uint32_t);
void helper_gvec_rotl32v(void*, void*, void*, uint32_t);
void helper_gvec_rotl64v(void*, void*, void*, uint32_t);

void helper_gvec_rotr8v(void*, void*, void*, uint32_t);
void helper_gvec_rotr16v(void*, void*, void*, uint32_t);
void helper_gvec_rotr32v(void*, void*, void*, uint32_t);
void helper_gvec_rotr64v(void*, void*, void*, uint32_t);

void helper_gvec_rotl8i(void*, void*, uint32_t);
void helper_gvec_rotl16i(void*, void*, uint32_t);
void helper_gvec_rotl32i(void*, void*, uint32_t);
void helper_gvec_rotl64i(void*, void*, uint32_t);
