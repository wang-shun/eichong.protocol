package com.epcentre.dao;

import java.util.List;


import com.epcentre.model.TblChargeACInfo;



public interface TblChargeACInfoDao {
	 
    public List<TblChargeACInfo> findChargeInfo(TblChargeACInfo info);
	
	public int insert(TblChargeACInfo info);
	
	public int update(TblChargeACInfo info);
	
	public int updateStartChargeInfo(TblChargeACInfo info);
}
