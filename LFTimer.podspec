Pod::Spec.new do |s|

  #库名，和文件名一样
  s.name         = "LFTimer"

  #tag方式：填tag名称
  #commit方式：填commit的id
  s.version      = "0.1.5"

  #库的简介
  s.summary      = "LFTimer是一个GCD定时器封装"

  #库的描述
  s.description  = <<-DESC
  LFTimer是一个GCD定时器封装，目前仅支持oc
                           DESC
  #库的远程仓库地址
  s.homepage     = "https://github.com/cailufei123"

  #版权方式
  s.license = { :type => "MIT", :file => "LICENSE" }

  #库的作者
  s.author             = { "cailufei" => "cailufei123@163.com" }

  #依赖于ios平台上的8.0
  s.platform     = :ios, "8.0"

  #库的地址
  s.source       = { :git => "https://github.com/cailufei123/LFTimer.git", :tag => s.version }



 s. source_files = 'LFTimer/*.{h,m}'

 s.frameworks = 'LFTimer/CoinTools.framework'
 

  # s.dependency 'Charts'
   # s.dependency 'AFNetworking'
    #s.dependency 'Masonry'
   # s.dependency 'YYKit'
    #s.dependency 'UITableView+FDTemplateLayoutCell'
   # s.dependency 'MJRefresh'
    #s.dependency 'JXCategoryView'
    #s.dependency 'SYProgressView'
  s.dependency 'FMDB'
end




